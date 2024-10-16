const axios = require('axios');

async function fetchExpressVersions() {
    try {
        const response = await axios.get('https://registry.npmjs.org/express');
        const versions = response.data.versions;

        const versionNumbers = Object.keys(versions);
        
        console.log(versionNumbers.join(', '));
    } catch (error) {
        console.error('Error fetching versions:', error.message);
    }
}

fetchExpressVersions();
